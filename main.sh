if command -v gcc >/dev/null 2>&1 ; then
g++ memory.cc -o memory && sudo chmod +x memory && sudo ./memory
else
echo "please, install gcc"
fi