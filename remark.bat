@echo off

Setlocal enabledelayedexpansion 

set filename=%1
rename %filename%.cpp %2_%filename:~3%.cpp
