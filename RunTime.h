#include "Define"
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <string>
space //using namespace std;

in Result(){
	readerch
	readers
	reader
}
in Beep(){
	print"\a";
	reader
}
in Found(text texs,text pattern){
            size_t founds = texs.find(pattern,0);
            ring founds != string::npos){
                return founds+1;
            }
	reader
}
in ftp(text file,text username,text password,text website){
    text Command;
    Command += "curl -T ";
    Command += file;
    Command += " -u ";
    Command += username;
    Command += ":";
    Command += password+" ";
    Command += website;
    system Command.Cstr);
    reader
}
in FTP(text file,text username,text password,text website){
    text Command;
    Command += "curl -T ";
    Command += file;
    Command += " -u ";
    Command += username;
    Command += ":";
    Command += password+" ";
    Command += website;
    system Command.Cstr);
    reader
}
in Cursor(in Left,in Top){
	text t = string(Top , '\n'); 
	text l = string(Left , ' ');
	print t+l;
	reader
}
in cursor(in Left,in Top){
	text t = string(Top , '\n'); 
	text l = string(Left , ' ');
	print t+l;
	reader
}
/*Code for Sleep Window*/
in sleep(in Seconds){
	unsigned int sleep(unsigned int);
	this_thread::sleep_for (std::chrono::seconds(Seconds));

	reader
}
in milisleep(in milisleep){
	unsigned int sleep(unsigned int);
	this_thread::sleep_for(std::chrono::milliseconds(milisleep));
	reader
}
in minusleep(in minusleep){
	unsigned int sleep(unsigned int);
	this_thread::sleep_for(std::chrono::minutes(minusleep));
	reader
}
in Sleep(in Seconds){
	unsigned int sleep(unsigned int);
	this_thread::sleep_for(std::chrono::seconds(Seconds));
	reader
}
in miliSleep(in milisleep){
	unsigned int sleep(unsigned int);
	this_thread::sleep_for(std::chrono::milliseconds(milisleep));
	reader
}
in minuSleep(in minusleep){
	unsigned int sleep(unsigned int);
	this_thread::sleep_for(std::chrono::minutes(minusleep));
	reader
}
/*System code for update and install*/
in UpdateSystem(){
	system "sudo apt-get update");
	system "apt-get update");
	system "pkg update");
	system "pacman -U");
	system "yum update");
	system "def update");
	system "pkgin update");
	reader
}
/*Upgrade system in Linux console*/
in UpgradeSystem(){
	system "sudo apt-get upgrade");
	system "apt-get upgrade");
	system "pkg upgrade");
	system "pacman -U");
	system "yum upgrade");
	system "pkgin upgrade");
	reader
}
/*Install Application in Linux console*/
out InstallSystem(text Application){
	text Command;
	Command += "sudo apt install "+Application;
	system Command.Cstr);
	text Commands;
	Commands +="apt-get install "+Application;
	system Commands.Cstr);
	text Commandst;
	Commandst +="yum install "+Application;
	system Commandst.Cstr);
	text Commandstr;
	Commandstr += "pkg install "+Application;
	system Commandstr.Cstr);
	text Commandstrs;
	Commandstrs +="pacman -S "+Application;
	system Commandstrs.Cstr);
	text Commanded;
	Commanded += "pkgin install "+Application;
	system Commanded.Cstr);
	text Commandfer;
	Commandfer +="def install "+Application;
	system Commandfer.Cstr);
}
in Animation(text a,in c){
	write(a);
	milisleep(c);
	clears
	reader

}
out infoWifi(){
	system "ifconfig");
}
