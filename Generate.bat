@echo off

if exist "out"  ( rmdir /S /Q "out" )
mkdir "out"

pushd "out"
cmake ..
popd
