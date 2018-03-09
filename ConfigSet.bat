@echo off
echo set config name %1
git config user.name "%1"
echo set config email %2
git config user.email "%2"