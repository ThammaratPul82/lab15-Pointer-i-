#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &a,int &b,int &c,int &d){
	int z[]={a,b,c,d};
	for (int i = 0; i < 4; i++) {
        int random_index = rand() % 4; // สุ่มเลข 0-3
        swap(z[i],z[random_index]);
    }

    // 3. เอาค่าที่สลับเสร็จแล้ว ยัดกลับคืนตัวแปรทั้ง 4
    a = z[0];
    b = z[1];
    c = z[2];
    d = z[3];
	
}
