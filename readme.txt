The code is in the "input.cpp" file.

The "graph1.py" file is a python script for generating the plot png from the outfile.

The "exec" file is a bash script which will automatically generate all the outfiles and plots of all the combinations of the parameters initialised in the file.
The parameters can be changed within the file to generate different plots and outfiles.

Run "make" to generate the executable "cw".
Pass all the parameters required (-i, -m, -n, -f, -s, -T, -o) to the executable to generate the outfile.
The command template:
./cw -­i <double> -­m <double> ­-n <double> -­f <double> -­s <double> -­T <int> ­-o <string>

Make sure the bash script "exec" has the execute permission.
Run "chmod +x exec" to make sure.
Run the bash script using "./exec"or "bash exec", it generates 32 plots and outfiles with given parameters.
All the outfiles and plots can be deleted using "rm -rf t*.png t*.txt".

The shell recording is done using the "script --timing=file_time shell_record1" command.
"exit" is used after recording is done
Use "scriptreplay file_time shell_record1" to play the recording in the terminal window.
