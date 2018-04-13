@echo off
for /f "delims=:. tokens=17*" %%i in ('ipconfig ^| find "IPv4" ^| findstr "140\.137\..*"') do echo %%i
pause > nul