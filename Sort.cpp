#include <iostream>
using namespace std;

class Items{
	private:
		int Scores[50];
		
	public:
		void AddScores(){
		Scores[0] = 33;
		Scores[1] = 22;
		Scores[2] = 44;
		Scores[3] = 55;
		Scores[4] = 11;
		}
	public:
		void DisplayScores(){
			for (int i = 0; i < 5; i ++){
				cout << Scores[i]<< endl;
			}
		}
	public:
		void BubbleSort(){
			int out, in, n = 5;
			for (int out = 0; out < n-1; out ++){
				for (int in = 0; in < n-out-1; in ++){
					if (Scores[in] > Scores[in + 1]){
						int temp = Scores[in];
						Scores[in] = Scores[in + 1];
						Scores[in + 1] = temp;
					}
				}
			}
		}
		
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Items S1;
	
	cout << "Before Sorting: \n";
	S1.AddScores();
	S1.DisplayScores();
	
	cout << "After Sorting: \n";
	S1.BubbleSort();
	S1.DisplayScores();
	
	return 0;
}
