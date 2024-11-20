#include <iostream>
#include <vector>

using namespace std;

// Cho f(x), tìm biểu thức của hàm f(y - c)

void hoocner_biendoiham (vector <float> &v, float c){
	for (int i = v.size(); i >= 1; i--){
		for (int j = 1; j < i; j++){
			v[j] += (v[j - 1] * c);
		}
	}
}
	
int main(){
	int n;
	cout << "Nhap bac cua da thuc f(x): ";
	cin >> n;
	vector <float> v;
	for (int i = n; i >= 0; i--){
		int tmp;
		if (i){
			cout << "Nhap he so bac " << i << " cua da thuc: ";
			cin >> tmp;
			v.push_back(tmp);
		}
		else{
			cout << "Nhap he so tu do cua da thuc: ";
			cin >> tmp;
			v.push_back(tmp);
		}
	}
	float c;
	cout << "Nhap he so cua da thuc f(y + c): ";
	cin >> c;
	hoocner_biendoiham(v,c);
	for (int i = 0; i < v.size(); i++){
		if (v[i]){
			cout << v[i] << "y^" << v.size() - i - 1;
			if (i - v.size() + 1) 
				cout << " + ";
		}
		
	}
	return 0;
}