#include <string>
#include <filesystem>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
// import std;
using namespace std;

int main() {
	system("pip freeze > requirements.txt");
	auto path = filesystem::current_path().string()+"\\requirements.txt";
	fstream fs(path, ios::in);
	vector<string> v;
	string line;
	if (!fs.is_open()) { throw exception();}
	while (getline(fs, line)){
		v.push_back(line.substr(0,line.find("=="))); }
	fs.close();
	fs.open(path, ios::out | ios::trunc);
	if (!fs.is_open()) { throw exception();}
	for (auto& i : v) {
		fs << i << endl;  }
	fs.close();
	system("pip install -r requirements.txt --upgrade");
	filesystem::remove(path);
	cout << "完成，按回车退出。" << endl;
	cin.get();
}