#include"file.h"
int main(int argc, char* agrv[]) {
	cout << " @@@@@@@@\                                     " << endl;
	cout << " @@@    \@@                                    " << endl;
	cout << " @@@    =@@`  /@@@@@\   =@@/@@@@@`   */@@@@@@@@" << endl;
	cout << " @@@  */@@^ ,@@`   =@@  =@@^   =@@  ,@@^   *@@@" << endl;
	cout << " @@@@@@/[   @@@@@@@@@@^ =@@    =@@  /@@     =@@ " << endl;
	cout << " @@@        =@@         =@@    =@@   \@@     /@@" << endl;
	cout << " @@@         *@@@`  ,/^ =@@    =@@  ,@@@` ,/@@@" << endl;
	cout << " [[[          ,[@@@/[   ,[[    ,[[    ,\@@/`=@@" << endl;
	cout << "                                          ,@@^" << endl;
	cout << "                                    @@@@@@@@`" << endl;
	unsigned int argvSize = 0;
	while (true)
	{
		if (agrv[argvSize] == NULL) {
			break;
		}
		else {
			argvSize++;
		}
	}
	char* path = nullptr;
	char* opath = nullptr;
	for (int i = 0; i < argvSize; i++) {
		if (!strcmp(agrv[i], "-h")|| agrv[1]==nullptr) {   
			cout << "##################################################" << endl;
			cout << "# -32 32λShellCode���ɣ���Ҫת��������Ϊ32λ��#" << endl;
			cout << "# -64 64λShellCode���ɣ���Ҫת��������Ϊ64λ��#" << endl;
			cout << "# -e ��Ҫת����exe·��                           #" << endl;
			cout << "# -o ���Shellcode��·��                         #" << endl;
			cout << "# ����: PengCode.exe -64 -e code.exe -o code.bin #" << endl;
			cout << "# ��Ҫ����Ա����PengCode!                        #" << endl;
			cout << "##################################################" << endl;
		}
		if (!strcmp(agrv[i], "-e")) {
			path = agrv[i + 1];
		}
		if (!strcmp(agrv[i], "-o")) {
			opath = agrv[i + 1];
		}
	}

	for (int i = 0; i < argvSize; i++) {
		if (!strcmp(agrv[i], "-64")) {
			if (path != nullptr && opath != nullptr) {
				Write64FileShellCode(path, opath);
				cout << "64λShellCode����" << endl;
				return 0;
			}
		}
		if (!strcmp(agrv[i], "-32")) {
			Write32FileShellCode(path, opath);
			cout << "32λShellCode����" << endl;
			return 0;
		}
	}
}