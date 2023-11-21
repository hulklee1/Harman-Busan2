@echo off
echo Push all new(modified) file(s) to github....
git add *
if %1 == "" (
git commit -m 1
)
else (
git commit -m %1
)
git push
echo Done.
