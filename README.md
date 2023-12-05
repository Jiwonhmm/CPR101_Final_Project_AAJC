# CPR101- Final Group Project

Members:
- **Team Leader** Adrian Curammeng - Conversions
- Armaan Singh Kooner - Tokenizing
- Caleb Giammarresi - Manipulations
- Jieweon Ham - Fundamentals

_____

**Initialising Git/Github**

```
:: Go to Folder on Computer
cd C:\Users\NAME\<FOLDER_NAME>

:: Create Empty Git Repository On Computer
git init

:: Check if Repository is Initialized (.git file)
On Windows: dir /a:h
On Unix/Mac: ls -a

:: Add GitHub Repository Origin
git remote add origin https://github.com/AdrianCurammeng/CPR101_Final_Project_AAJC
```

**Adding Files to Github**

```
:: Go to Folder
cd C:\Users\NAME\<FOLDER_NAME>

:: Add Files to Current Folders

:: Add Files to Github Commit
git add --all

:: Add Commit Message
git commit -m "Here is my message"

:: Push Changes to Repository
git push -u -f origin main

:: Check If Push was Successful
git status
```

**Saving Git Logs to Output**

```
:: Save Git Commit Logs to File
git --no-pager log -p --author="<Github Username>" > <module_name>-git-log.txt 
```
