#include <iostream>

using namespace std;

class Employee {
	private:
		string first_name;
		string last_name;
		int monthly_salary;
		
	public:
		//constructor
		Employee(string namadepan,string namabelakang, int gaji)
		{
			setFirst_name(namadepan);
			setLast_name(namabelakang);
			setMonthly_salary(gaji);
		}
		
		//setter
		void setFirst_name(string first_name){
			this->first_name = first_name;
		}
		
		void setLast_name(string nama_belakang){
			last_name = nama_belakang;
		}
		
		void setMonthly_salary(int gaji_bulanan){
			if(gaji_bulanan <= 0){
				gaji_bulanan = 0;
			}
			monthly_salary = gaji_bulanan;
		}
		//getter
		string getFirst_name(){
			return first_name;
		}
		string getLast_name(){
			return last_name;
		}
		int getMonthly_salary(){
			return monthly_salary;
		}
	
		//fungsi hitung dan tampilkan
		void salary(){
			int tahunan = getMonthly_salary()*12;
			int tahunan_10 = (getMonthly_salary()+(getMonthly_salary()*0.1))*12;
			
			cout << "Nama : " << getFirst_name() << " " << getLast_name() << endl;
			cout << "Gaji tahunan : " << tahunan << endl;
			cout << "Gaji tahunan setelah ditambah 10%: " << tahunan_10 << endl;
			cout << "-------------------------" << endl;
		}
	
};

int main(){
	string depan, belakang;
	Employee employee1("Achmad","Megantara",400000);
	Employee employee2("Achmad","Akbar",-400000);
	
	employee1.salary();
	employee2.salary();
	
	return 0;
}
