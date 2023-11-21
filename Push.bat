@echo off
echo Push all new(modified) file(s) to github....
git add *
IF %1 == "" (
git commit -m 1
) ELSE (
git commit -m %1
)
git push
echo Done.
