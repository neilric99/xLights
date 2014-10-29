#include "ViewsDialog.h"

#include "djdebug.cpp"

#define WANT_DEBUG_IMPL
#define WANT_DEBUG  100 //unbuffered in case app crashes

#ifndef debug_function //dummy defs if debug cpp not included above
#define debug(level, ...)
#define debug_more(level, ...)
#define debug_function(level)
#endif

//cut down on mem allocs outside debug() when WANT_DEBUG is off:
#ifdef WANT_DEBUG
#define IFDEBUG(stmt)  stmt
#else
#define IFDEBUG(stmt)
#endif // WANT_DEBUG



//(*InternalHeaders(ViewsDialog)




//(*IdInit(ViewsDialog)
















BEGIN_EVENT_TABLE(ViewsDialog,wxDialog)
	//(*EventTable(ViewsDialog)
	//*)
END_EVENT_TABLE()

ViewsDialog::ViewsDialog(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(ViewsDialog)
























































































}

void ViewsDialog::SetModelAndViewNodes(wxXmlNode* modelsNode,wxXmlNode* viewsNode)
{
    wxString name;
    wxXmlNode* e;
    models = modelsNode;
    views = viewsNode;
    for(e=views->GetChildren(); e!=NULL; e=e->GetNext() )
    {
        if (e->GetName() == "view")
        {
            name=e->GetAttribute("name");
            if (!name.IsEmpty())
            {
                lstViews->Append(name,e);
            }
        }
    }

}

ViewsDialog::~ViewsDialog()
{
	//(*Destroy(ViewsDialog)
	//*)
}


void ViewsDialog::OnlstViewsSelect(wxCommandEvent& event)
{
    wxString viewModels;
    wxXmlNode* e;
    e=(wxXmlNode*)(lstViews->GetClientData(lstViews->GetSelection()));
    viewModels = e->GetAttribute("models");
    debug(1,"Model=");
    lstModelsInView->Clear();
    wxArrayString model=wxSplit(viewModels,',');
    for(int i=0;i<model.size();i++)
    {
        lstModelsInView->Append(model[i]);
    }
    Text_ViewName->SetValue(lstViews->GetString(lstViews->GetSelection()));
    PopulateUnusedModels(model);
}

void ViewsDialog::PopulateUnusedModels(wxArrayString model)
{
    wxString name;
    wxXmlNode* e;
    lstAddModelToViews->Clear();
    for(e=models->GetChildren(); e!=NULL; e=e->GetNext() )
    {
        if (e->GetName() == "model")
        {
            name=e->GetAttribute("name");
            if(model.Index(name,false,false)==wxNOT_FOUND)
            {
                lstAddModelToViews->Append(name);
            }
        }
    }
}

void ViewsDialog::OnbtAddModelToViewClick(wxCommandEvent& event)
{
    int selectedIndex = lstAddModelToViews->GetSelection();
    if(selectedIndex !=  wxNOT_FOUND)
    {
        lstModelsInView->Append(lstAddModelToViews->GetString(selectedIndex));
        lstAddModelToViews->Delete(selectedIndex);
    }
    if(selectedIndex<lstAddModelToViews->GetCount())
    {
        lstAddModelToViews->SetSelection(selectedIndex,TRUE);
    }
    else
    {
        lstAddModelToViews->SetSelection(lstAddModelToViews->GetCount()-1,TRUE);
    }
}

void ViewsDialog::OnbtRemoveModelFromViewClick(wxCommandEvent& event)
{
    int selectedIndex = lstModelsInView->GetSelection();
    if(selectedIndex !=  wxNOT_FOUND)
    {
        lstAddModelToViews->Append(lstModelsInView->GetString(selectedIndex));
        lstModelsInView->Delete(selectedIndex);
    }
    if(selectedIndex<lstModelsInView->GetCount())
    {
        lstModelsInView->SetSelection(selectedIndex,TRUE);
    }
    else
    {
        lstModelsInView->SetSelection(lstModelsInView->GetCount()-1,TRUE);
    }
}

void ViewsDialog::OnbtnUpdateViewClick(wxCommandEvent& event)
{
    wxXmlNode* e;
    if(lstViews->GetSelection() != wxNOT_FOUND)
    {
        wxString viewModels="";
        for(int i=0;i<lstModelsInView->GetCount();i++)
        {
            if (i<lstModelsInView->GetCount()-1)
            {
                viewModels += lstModelsInView->GetString(i) + ",";
            }
            else
            {
                viewModels += lstModelsInView->GetString(i);
            }
        }
        lstViews->SetString(lstViews->GetSelection(),Text_ViewName->GetValue());
        e=(wxXmlNode*)(lstViews->GetClientData(lstViews->GetSelection()));
        e->DeleteAttribute("name");
        e->AddAttribute("name",Text_ViewName->GetValue());
        e->DeleteAttribute("models");
        e->AddAttribute("models",viewModels);
    }
}

void ViewsDialog::OnText_ViewNameTextEnter(wxCommandEvent& event)
{
}

void ViewsDialog::OnBtAddViewClick(wxCommandEvent& event)
{
    wxArrayString arrModels;
    wxXmlNode* e=new wxXmlNode(wxXML_ELEMENT_NODE, "view");
    e->AddAttribute("name", "New View");
    e->AddAttribute("models", "");
    views->AddChild(e);
    lstViews->Append("New View",e);
    lstViews->SetSelection(lstViews->GetCount()-1);
    Text_ViewName->SetValue("New View");
    PopulateUnusedModels(arrModels);
}

void ViewsDialog::OnBtRemoveViewClick(wxCommandEvent& event)
{
    if(lstViews->GetSelection() != wxNOT_FOUND)
    {
        wxXmlNode* e=(wxXmlNode*)(lstViews->GetClientData(lstViews->GetSelection()));
        views->RemoveChild(e);
        lstViews->Delete(lstViews->GetSelection());
    }
}

void ViewsDialog::OnbtCloseViewsClick(wxCommandEvent& event)
{
    this->EndModal(wxID_OK);
}