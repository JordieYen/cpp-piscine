#include <iostream>
#include <fstream>
#include <sstream>

using std::string;
using std::cout;

inline bool isFileExist(const std::string& name)
{
    std::ifstream f(name.c_str());
    return f.good();
}

string copyData(std::ifstream& in) {
    std::ostringstream sstrr;
    sstrr << in.rdbuf();
    return sstrr.str();
}

void	replaceString(string *str, char *beforec, char *afterc)
{
	string	before = beforec;
	string	after = afterc;
	size_t found = str->find(before);

	if (before.compare(after) == 0)
		return ;
    while (found != string::npos)
	{
		str->erase(found, before.length());
		str->insert(found, after);
		found = str->find(before);
	}
}

int	main(int argc, char **argv)
{
	string filename;
	string filecontents;

	if (argc == 4)
	{
		filename = argv[1];
		if (!isFileExist(filename))
		{
			cout << "input a valid filename\n";
			return (0);
		}
		std::ifstream indata;
		indata.open(filename);
		filecontents = copyData(indata);
		indata.close();
		replaceString(&filecontents, argv[2], argv[3]);
		filename += ".replace";
		std::ofstream outfile (filename);
		outfile << filecontents;
		outfile.close();
	}
	else
		std::cout << "input arguments as follows ./sed <filename> <string1> <string2>\n";
	return (0);
}