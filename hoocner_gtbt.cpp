#include <iostream>
#include <vector>

using namespace std;

// Code tính giá trị biểu thức theo phương pháp Horner

float tinhGiaTri_hoocner(vector<float> v, float x){
	float result = v[0];
	for (int i = 1; i < v.size(); i++){
		result = result * x + v[i];
	}
	return resultl
}

int main(){
	int n;
	cout << "Nhap bac cua da thuc: ";	
	cin >> n;
	vector<float>v;
	for (int i = n; i >= 0; i--){
		float tmp;
		if (i){
			cout << "Nhap he so bac " << i << " cua da thuc: ";
			cin >> tmp;
			v.push_back(tmp);
		}
		else{
			cout << "Nhap he so tu do: ";
			cin >> tmp;
			v.push_back(tmp);
		}
	}
	float x;
	cout << "Nhap gia tri x = ";
	cin >> x;
	cout << "Gia tri cua da thuc tai x = " << x << " la: " << tinhGiaTri_hoocner(v,x);
	return 0;
}
