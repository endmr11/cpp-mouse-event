#include <windows.h>
#include <iostream>
#include <cstdlib>
void MoveMouse(int x,int y);
using namespace std;

int main(){
	bool boo = true;
	bool r = false;
	int x = 0;
	int y = 0;
	while(boo){
		if(GetKeyState(VK_LEFT)<0){
			x--;
		    if(x < 0){
				x = 0;
			}
			r = true;
			MoveMouse(x,y);
		}
		if(GetKeyState(VK_RIGHT)<0){
			x++;
			if(x < 0){
				x = 0;
			}
			r = true;
			MoveMouse(x,y);
		}
		if(GetKeyState(VK_UP)<0){
			y--;
			if(y < 0){
				y = 0;
			}
			r = true;
			MoveMouse(x,y);
		}
		if(GetKeyState(VK_DOWN)<0){
			y++;
			if(y < 0){
				y = 0;
			}
			r = true;
			MoveMouse(x,y);
		}
		if(GetKeyState(VK_SPACE)<0){
			boo = false;
			}
		if(r)
		{
    		    system("cls");
    		    cout << x << endl;
    		    cout << y << endl;
    		    r = false;
                                }
	}
	system("cls");
}

void MoveMouse(int x, int y){
	int buffer;
	for(buffer = 0; x >= buffer && y >= buffer; buffer++){
	    SetCursorPos(x,y);
	    //Sleep(1);
	}
}
