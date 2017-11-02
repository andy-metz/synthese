
#include <string>
#include <iostream>

using namespace std;

int main1()
{
int i;
char ch1 [] = {'й','в','к','и','о','\0'};
char * ch2 = "йвкио";

char ch3[] = {130,131,136,138,140,0};

wchar_t * ch4 = L"йвкио";

cout << "ch1 = " << ch1 << endl;
cout << "ch2 = " << ch2 << endl;
cout << "ch3 = " << ch3 << endl;
wcout << "ch4 = " << ch4 << endl;



for ( i = 0; i < strlen(ch1); ++i)
	cout << " car dans ch1 = " << ch1[i] << ", code dans ch1 = " << (int)ch1[i] << endl;

for ( i = 0; i < wcslen(ch4); ++i)
	wcout << " car dans ch4 = " << ch4[i] << ", code dans ch4 = " << (int)ch4[i] << endl;

char ch;

char mot[100];
cout << "tapez un mot" << endl;
cin >> mot;
cout << "mot = " << mot << endl;

for ( i = 0; i < strlen(mot); ++i)
	cout << " car = " << mot[i] << ", code = " << (int)mot[i] << endl;

cin >> ch;
wstring ws = L"йlйphant";

wcout << ws << endl;

wprintf(L"%ls\n",ws.c_str());


char c;
cout << "code ascii : " << endl;

cout << "sizeof(char) = " << sizeof(char) << endl;
cout << "sizeof(wchar_t) = " << sizeof(wchar_t) << endl;

for ( i = -128; i < 128; ++i)
	cout << " i = " << i << ", car = " << (char)i << endl;
cin >> ch;

for ( ; i < 256; ++i)
	cout << " i = " << i << ", car = " << (char)i << endl;


cin >> ch;

return 0;
}