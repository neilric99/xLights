; -- xLights_opengl.iss --
; File used for building xLights.exe

;  SEE THE DOCUMENTATION FOR DETAILS ON CREATING .ISS SCRIPT FILES!

#define MyTitleName "xLights" 

[Setup]
; Tell Windows Explorer to reload the environment
ChangesEnvironment=yes
AppName=xLights-Nutcracker
AppVersion=3.6.15
DefaultDirName={pf}\xLights
DefaultGroupName=xLights
UninstallDisplayIcon={app}\xLights.exe
Compression=lzma2
SolidCompression=yes
OutputDir=output
OutputBaseFilename=xLights_Nutcracker_3_6_x

[Files]
Source: "bin/xLights.exe"; DestDir: "{app}"
Source: "C:\Users\Sean_Dell\wxwidgets-3.0.2\lib\gcc_dll\wxmsw30u_gcc_custom.dll"; DestDir: "{app}"
Source: "C:\Users\Sean_Dell\wxwidgets-3.0.2\lib\gcc_dll\wxmsw30u_gl_gcc_custom.dll"; DestDir: "{app}"
Source: "C:\Users\Sean_Dell\wxwidgets-3.0.2\lib\gcc_dll\wxmsw30ud_gl_gcc_custom.dll"; DestDir: "{app}"
Source: "C:\Users\Sean_Dell\Documents\xLights\bin\glut32.dll"; DestDir: "{app}"



Source: "bin/ffmpeg.exe"; DestDir: "{app}"
Source: "bin/gawk.exe"; DestDir: "{app}"
Source: "bin/coroface.awk"; DestDir: "{app}"
Source: "bin/corofaces.bat"; DestDir: "{app}"
Source: "bin/picturefaces.awk"; DestDir: "{app}"
Source: "bin/modelxls.awk"; DestDir: "{app}"
Source: "bin/modelxls.bat"; DestDir: "{app}"
Source: "bin/merge_xml.awk"; DestDir: "{app}"
Source: "bin/PathEditor.exe"; DestDir: "{app}"
Source: "include\xLights.ico"; DestDir: "{app}"
Source: "C:\Users\Sean_Dell\Documents\xLights\songs/*.*"; DestDir: "{app}/songs"    ; Flags: replacesameversion recursesubdirs
Source: "piano/*.*"; DestDir: "{app}/piano" 

;Source: "include/*.xpm"; DestDir: "{app}/include" 



;Source: "c:\wxWidgets\lib\gcc_dll\wxmsw294u_gcc_custom.dll"; DestDir: "{app}"
;Source: "C:\wxWidgets-3.0.0\lib\gcc_dll\wxmsw30u_gcc_custom.dll"; DestDir: "{app}"

Source: "License.txt"; DestDir: "{app}";
Source: "README.txt";  DestDir: "{app}"; Flags: isreadme
;Source: "README.corofaces.txt";  DestDir: "{app}"; Flags: isreadme

[Run]

Filename: "{app}\xLights.exe"; Description: "Launch application"; Flags: postinstall nowait skipifsilent 



[Icons]
Name: "{group}\xLights"; Filename: "{app}\xLights.exe" ;  IconFileName: "{app}\include\xLights.ico"

[Registry]
; set PATH. if it is already there dont add path to our installation. we are doing this so user can run ffmpeg from a cmd prompt
Root: HKLM; Subkey: "SYSTEM\CurrentControlSet\Control\Session Manager\Environment"; ValueType: expandsz; ValueName: "Path"; ValueData: "{olddata};{pf}\xLights"; Check: NeedsAddPath ('C:\Program Files (x86)\xLights')


[Code]

function NeedsAddPath(Param: string): boolean;
var
  OrigPath: string;
begin
  if not RegQueryStringValue(HKEY_LOCAL_MACHINE,'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'Path', OrigPath)
  then begin
    Result := True;
    exit;
  end;
  // look for the path with leading and trailing semicolon
  // Pos() returns 0 if not found
  Result := Pos(';' + UpperCase(Param) + ';', ';' + UpperCase(OrigPath) + ';') = 0;  
  if Result = True then
     Result := Pos(';' + UpperCase(Param) + '\;', ';' + UpperCase(OrigPath) + ';') = 0; 
end;