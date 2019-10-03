#include <iostream>

using namespace std;

class HeartRates {
	private:
	string first_name, last_name;
	int month, day, year, max, age;
	int curr_month, curr_day, curr_year;
	double target;
	
	public:
		//constructor
		HeartRates(string namadepan, string namabelakang, int tanggal_lahir, int bulan_lahir, 
		int tahun_lahir, int tanggal_sekarang, int bulan_sekarang, int tahun_sekarang)
		{			
			setFirst_name(namadepan);
			setLast_name(namabelakang);
			setMonth(bulan_lahir);
			setDay(tanggal_lahir);
			setYear(tahun_lahir);
			setCurr_month(bulan_sekarang);
			setCurr_day(tanggal_sekarang);
			setCurr_year(tahun_sekarang);
		}
		
		//setter
		void setFirst_name(string first_name){ this->first_name = first_name;	}
		void setLast_name(string last_name){ this->last_name = last_name;	}
		void setMonth(int month){ this->month = month; }
		void setDay(int day){ this->day = day; }
		void setYear(int year){ this->year = year;	}
		void setCurr_month(int curr_month){ this->curr_month = curr_month; }
		void setCurr_day(int curr_day){ this->curr_day = curr_day; }
		void setCurr_year(int curr_year){ this->curr_year = curr_year;}
		
		//getter
		string getFirst_name(){	return first_name; }
		string getLast_name(){ return last_name; }
		int getMonth(){ return month; }
		int getDay(){ return day; }
		int getYear(){ return year; }
		int getCurr_month(){return curr_month; }
		int getCurr_day(){return curr_day; }
		int getCurr_year(){return curr_year; }
		
		//processing
		int getAge(){ return age = (getCurr_year()-getYear()); }
		int getMaximumHeartRate(){ return max = (220-getAge());	}
		double getTargetHeartRate_min(){ return target = (getMaximumHeartRate()*50/100); }
		double getTargetHeartRate_max(){ return target = (getMaximumHeartRate()*85/100); }
		
		//selisih bulan
		int selisihbulan(){
			int selisih_bulan;
			if(getCurr_month() >= getMonth()){
				selisih_bulan = getCurr_month()-getMonth();
			} else if (getMonth() > getCurr_month()) {
				selisih_bulan = getMonth()-getCurr_month();
			}
			return selisih_bulan;
		}
		
		//selisih tanggal
		int selisihtanggal(){
			int selisih_tanggal;
			if(getCurr_day() >= getDay()){
				selisih_tanggal = getCurr_day()-getDay();
			} else if (getDay() > getCurr_day()){
				selisih_tanggal = getDay()-getCurr_day();
			}
			return selisih_tanggal;
		}
		
		//menampilkan hasil
		void display(){
			cout << "Halo, " << getFirst_name() << " " << getLast_name() << endl;
			cout << "Your age is " << getAge() << " years," << selisihbulan() << " month, and " << selisihtanggal() << " day." << endl;
			cout << "Your maximum heart rate is " << getMaximumHeartRate() << " per minute" << endl;
			cout << "Your Target heart rate is in the range " << getTargetHeartRate_min() << " to " << getTargetHeartRate_max() << endl; 
			
		}
};

int main(){
		//variabel
		int curr_day, curr_month, curr_year;
		int day,month,year;
		string first_name, last_name;
		
		cout << "Welcome in Target Heart Rate calculator application" << endl;
		cout << "----------------------------------------------------" << endl;
		
		//input user date of birth
		cout << "Enter your first name : "; cin >> first_name;
		cout << "Enter your last name : "; cin >> last_name;
		do{
			cout << "Enter your date of birth [1-31] : "; cin >> day;
		} while((day>31) || (day<=0));
			
		do{
			cout << "Enter your month of birth [1-12] : "; cin >> month;
		} while((month>12) || (month<=0));

		do{
			cout << "Enter your year of birth [XXXX] : "; cin >> year;
		} while(year<=0);

		cout << "------------------------------------" << endl;
		
		//input current date
		do{
			cout << "Enter current day [1-31] : "; cin >> curr_day;
		} while((curr_day>31) || (curr_day<=0));
			
		do{
			cout << "Enter current month [1-12] : "; cin >> curr_month;
		} while((curr_month>12) || (curr_month<=0));

		do{
			cout << "Enter current year [XXXX] : "; cin >> curr_year;
		} while(curr_year <=0);

		cout << "------------------------------------" << endl;
		

		//create the object	
		HeartRates heartRate(first_name,last_name,day,month,year,curr_day,curr_month,curr_year);
		
		//call display function
		heartRate.display();
	
	return 0;
}
