@echo off

git config --global user.email "jugnme@126.com"
git config --global user.name "bizwofficial"

git add .
git commit --allow-empty-message -m ""
git push

pause
