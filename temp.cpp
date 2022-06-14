#include <stdio.h>
#include <string.h>
#include<iostream>
#include<math.h>
#include<iomanip>
#include<map>
#include<cstring>
using namespace std;
/* int main ()
{
   char str[50];
   int len;

   strcpy(str, "Hoc C co ban va nang cao tai QTM !!!");

   len = strlen(str);
   printf("Do dai cua chuoi:\n |%s| \nla bang:\n |%d|\n", str, len);
   
   return(0);
} */

/* void printPrimes(int lower, int upper)
{
    //TODO
    for (int i=lower; i<=upper; i++)
        {   int sum=0;
            for (int j=1; j<=i; j++) {
                if (i%j==0) {
                    sum+=1;
                }
            }
            if (sum==2) {
                cout << i << " ";
        }
    }
}
int reverseNum(int n)
{
    //TODO
    int a[1000];
    int o=n;
    int count=0;
    for (; o/10!=0;){
        o/=10;
        count++;
    }
    int i=0;
    while (n/10!=0) {
        int pow=1;
        for (int g=count; g>0; g--) {
            pow*=10;
        }
        a[i]=n%pow;
        for (;pow!=10;) {
            pow/=10;
            a[i]=a[i]%pow;
        }
        n/=10;
        i++;
        count--;
    }
    a[i]=n;
    int v=a[i];
    for (int j=i-1; j>=0; j--) {
        int powe=1;
        for (int g=j; g<i; g++) {
            powe*=10;
        }
        v+=a[j]*powe;
    }
    return v;
}
int main() {
	int n; cin >> n;
	cout << reverseNum(n);
	return 0;
} */
/* int main() {
	    int x =4, y = 5, z;
     z = ++(x+y);
    cout<<z;
    return 0;
} */
/*Hộc đạn shotgun chứa được m viên, bần một viên mất r giây. Shotgun có 02 
cách nạp đạn là thay nguyên hộc đạn mới mất c
giây, hoặc nạp từng viên một vào hộc đạn cũ, mỗi viên nạp mất b giây.
Bảng kinh nghiệm chơi lâu năm khéo léo của mình Bình đã vòng ra được sau lưng 
team địch với một khẩu shotgun đầy đạn.
Tất cả n tên địch không để ý tới Bình. Bạn hãy tính toán xem nếu Bình bắn bách
phát bách trúng và thì cần tối thiểu bao
nhiêu giây để hạ hết toàn bộ team địch.

INPUT
05 số nguyên không âm b, c, m, n, r trên một hàng, cách nhau bởi khoảng tráng

OUTPUT
Thời gian cần thiết để Bình diệt hết địch*/

/*int main() {
	unsigned int b, c, m, n, r; 
	cin>> b;
	cin>> c;
	cin>> m;
	cin>> n; 
	cin>> r;
	int time;
	int left;
	left = n%m;
	time = n/m;
	int result;
	int aftern=n;
	if (n==0) {cout << 0; return 0;}
	if (n<=m) {cout << r*n; return 0;} 
	if (left*b <= c) {
		cout << (time-1)*c + left*b + r*n;
	} else cout << time*c + r*n;
	return 0;
} */
/* int main() {
    map<string, int> A; // Khởi tạo một map A

    // Thêm vào map A một số phần tử.
    A["One"] = 1;
    A["Two"] = 2;
    A["Three"] = 3;

    // Duyệt và xuất ra từng cặp giá trị key: value của mỗi phần tử trong map A
    map<string, int>::iterator it;
    for (it = A.begin(); it != A.end(); it++) {
        cout << it->first.c_str() << ": " << it->second << endl;
    }

    // Thêm vào một phần tử giá trị key trùng lặp, chuyện gì sẽ xảy ra?
    A["One"] = 10;

    // In kết quả map A ra màn hình sau khi thêm vào 1 key trùng lặp,
    // tự chạy code xem kết quả của chính bạn.
    for (it = A.begin(); it != A.end(); it++) {
        cout << it->first.c_str() << ": " << it->second << endl;
    }
    int a[1000]={1,2,3};
    cout << a.size(); 
} */
/* int main() {
	int j=3, i=3;
	int a[100];
	int sub;
	for (int run=100; run > i; run--) {
		a[run]=a[run-1];
	}
	a[i]=j;
	for (int v=0; v<100; v++){
		cout << a[v] << " ";
	}
    return 0;
} */

/*int funct( int);
int main(){
int count, value;
for(count = 1; count <= 10; count++){
value = funct( count);
cout << count << '\t' << value << endl;}

cout << sum;
return 0;
}
int funct( int x)
{
static int sum = 100; // with and without static makes big difference to the output
sum += x;
return sum;
}*/
/*bool isSquared(int n){
	for (int i=1;i<=n;i++){
		if(n/i==i && n%i==0){
			return 1;
			break;
		}
	}
	return 0;
}

bool isPrime(int n){
	int time=0;
	if (n==1) 
		{return 0;}
	for(int i=1; i<=n; i++){
		if(n%i==0){
			time++;
		}
	}
	if (time==2) 
		{return 1;}
	else 
		{return 0;}

}

int move(string moves){
	int distance;
	static int u=0,d=0,l=0,r=0;
	string::size_type sz;
	if (moves=="") {
		float dist=sqrt((u-d)*(u-d)+(l-r)*(l-r));
		if (dist >= ((int)dist + 0.5)){
			distance=(dist+1);
			return distance;
		}
		else {
			distance=dist;
			return distance;
		};
	}
	if (moves[0]=='U'){
			moves=moves.substr(1);
			u+=stoi(moves, &sz);
			return move(moves.substr(sz));
		}
	if (moves[0]=='D'){
			moves=moves.substr(1);
			d+=stoi(moves, &sz);
			return move(moves.substr(sz));
		}
	if (moves[0]=='R'){
			moves=moves.substr(1);
			r+=stoi(moves, &sz);
			return move(moves.substr(sz));
		}
	if (moves[0]=='L'){
			moves=moves.substr(1);
			l+=stoi(moves, &sz);
			return move(moves.substr(sz));
		}
	}

int main(){
	bool primality, squared;
	string moves;
    int distance;
	cin >> moves;
	distance=move(moves);
	cout <<distance<<endl;
	primality=isPrime(distance);
	squared=isSquared(distance);
	if (primality) {
        cout << "Number " << distance << " is prime number\n";
    }
    if (squared) {
        cout << "Number " << distance << " is square number\n";
    }
    return 0;
	}
*/

/*int main(){
	
	string n;
	string::size_type sz;
	cin >> n;
	int i;
	if(n[0]=='U'){
		n=n.substr(1);
		cout<<n;
	}
	
	if(n==""){
		cout<<"null string";
	}

	i= stoi(n, &sz);
	cout << i << " "; 
	cout<<sz;
	return 0;
}*/
/******************************************************************************
 * Support Functions: these functions below are optional. If you want your code
					  to be clearer, you can implement them. However if you
					  dont know how to use funtion in programming, dont worry, 
					  you dont have to implement them, and you just add a comment 
					  in each of them.
*******************************************************************************/
/*
int move(string moves)
{
    
    int distance;
	static int u=0,d=0,l=0,r=0;
	string::size_type sz;
	if (moves=="") {
		float dist=sqrt((u-d)*(u-d)+(l-r)*(l-r));
		if (dist >= ((int)dist + 0.5)){
			distance=(dist+1);
			return distance;
		}
		else {
			distance=dist;
			return distance;
		}
	}
	if (moves[0]=='U'){
			moves=moves.substr(1);
			u+=stoi(moves, &sz);
			return move(moves.substr(sz));
		}
	if (moves[0]=='D'){
			moves=moves.substr(1);
			d+=stoi(moves, &sz);
			return move(moves.substr(sz));
		}
	if (moves[0]=='R'){
			moves=moves.substr(1);
			r+=stoi(moves, &sz);
			return move(moves.substr(sz));
		}
	if (moves[0]=='L'){
			moves=moves.substr(1);
			l+=stoi(moves, &sz);
			return move(moves.substr(sz));
		}
    return 0; //THIS IS IT!!!!
}

bool isPrime(int n)
{
    
    int time=0;
	if (n==1) 
		{return 0;}
	for(int i=1; i<=n; i++){
		if(n%i==0){
			time++;
		}
	}
	if (time==2) 
		{return 1;}
	else 
		{return 0;}

}

bool isSquared(int n)
{
    
    for (int i=1;i<=n;i++){
		if(n/i==i && n%i==0){
			return 1;
			break;
		}
	}
	return 0;

}

int main()
{
    string moves;
    int distance;
    bool primality, squared;

    /// =======================================================
    
    /// BEGIN   TESTCASE
    cin >> moves;
    /// END     TESTCASE

   
   
    distance=move(moves);
    

   
    cout << "The distance the vehicle has moved from the origin to the current point is: "
        << distance << '\n';


  
   
    primality=isPrime(distance);
    

    
    squared=isSquared(distance);
    

    

    if (primality) {
        cout << "Number " << distance << " is prime number\n";
    }
    if (squared) {
        cout << "Number " << distance << " is square number\n";
    }

    return 0;
}
*/
//int x=10;
/* int sum(int n) {
	if (n == 0) return 0;
	return n + sum(n-1);
}
void testauto(){
	int num = 0;
	cout << num << endl;
	num++;
}
const int hi=40;
int main() {
	{int i=3,a=10, year;
	{
		int a=4;
		cout << i;
		cout << a;

	}
	cout << i;
	cout << a<<endl;
	if ((a|i) ==11)
		cout << 2;
		else cout << (i|a);
	cout << endl;
	cout << (a&i) << endl;	
	cout <<fixed << setprecision(2)  << "|" << setw(5)<<3.246 << "|" << endl;
	cin >> year;
	if (((year % 400 == 0)) || ((year%100!=0) && (year%4==0))){
		cout << "nhuan";
	}	else cout << "khong nhuan";
	bool t1=false;
	cout << t1<<endl;
	int hi=50;
	cout << hi<<endl;}

	int i=3;
	while (i<=5){
		if (true){
			i++;
			cout<<"do"<<endl;
		continue;
		i--;
		cout << "dont";
	} else i--;}
	cout << i<<endl;
	int arr[5][10];
	for (int i=0; i<5; i++){
		for (int j=0; j<10; j++){
			cout << &arr[i][j] << "\t";
		}
	}
	cout<<hi<<endl;
	//cout << x << endl;
	int x =20; cout << x << endl;
	{
		cout << x << endl;
		x = 40;
		cout << x << endl;
	}
	cout << x << endl;
	for (int count = 1 ; count <= 3 ; count ++ ) {
		testauto();
		//return 0;
	}
	int ai=7, bi=3;
	cout << ai%bi << endl;
	string st="the";
	cout << st[1] <<endl;
	cout << sum(5)<<endl;
	for (int i=0; i<5; i++){
		cout << i << " ";
	}
	cout << endl;
	float p=10; int o=5;
	p-=o;
	{
		int x=2, y=3;
		y = x + (x=4);
		cout << y;
	}
	const int vi = 10;
	//int vi = 20; // not in same scope
	cout << vi<<endl;
	 int c=0;
  if(printf("Hello World!\n"))
  c++;
  printf("%d",c);
  cout <<endl;
  cout << "\"This is a string\"" << endl;    
  int k=-6;
  k<<=1;
  cout <<k <<endl;
  {
  	cout << "today is // mon \\ monday"; // behind \ char will be a kind of output manipulator, with \\ it will keep 1 \ just like \"
  }
	return 0;
} */



/*
struct SV
{
  string name;
  float score;
};

int main ()
{
  int n;
  cin >> n;
  struct SV arr[n];
  for (int i = 0; i < n; i++)
    {
      cin.ignore ();
      getline(cin, arr[i].name);
      cin >> arr[i].score;
    }
  int max = arr[0].score;
  int a = 0;
  for (int i = 0; i < n; i++)
    {
      if (arr[i].score > max)
	{
	  max = arr[i].score;
	  a = i;
	}
    }
  cout << max << endl;
  cout << arr[a].name;
  cout << endl << arr[a].score;
  return 0;
} */



/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

// Student may implement another function as need


// Student may implement another function as need


void
process (char str[], char outstr[])
{
  // TODO
 
  int a;
  //cout << str << endl << outstr << endl << strlen (str) << endl;

  for (int i = 0; i < strlen (str); i++)
    {
      if (str[i] != ' ')
	{
	  //outstr[0] = str[i];
	  a = i;
	  break;
	}
    }
    int b;
  for (int i = strlen(str)-1; i >=a; i--)
    {
      if (str[i] != ' ')
	{
	  //outstr[0] = str[i];
	  b = i;
	  break;
	}
    }
  //cout << a << endl << b << endl;
  /* for (int i = a; i < strlen(str); i++){
      if (str[i]!=' '){
          outstr[i-a+1] = str[i];
      } else if () 
  }*/
  int l;
    for (int i=a; i<=b; i++){
        outstr[i-a]=str[i];
    }
    for (int i=0; i<strlen(outstr); i++){
        if(outstr[i]==' '){
            if(outstr[i+1]==' '){
                //l=strlen(outstr)-1;
                for(int j=i+1; j<(strlen(outstr)-1); j++){
                    outstr[j]=outstr[j+1];
                    l=j+1;
                } 
                for (int k=l; k<strlen(outstr); k++){
                    outstr[k]='\0';
                }
                    
                
                i--;
                
            }
        }
    }
    int len=strlen(outstr);
    outstr[len]='\0';
    if (a==(strlen(str)-1)){
        outstr[0]='\0';
    }
     if (str==""){
      outstr=str;
  }
}



int main() {
  char str[] = "             iurwgw     ewpifwp        pwi    ";
  char *outstr = new char[strlen (str) + 1];
  process (str, outstr);
  cout << outstr;
}
