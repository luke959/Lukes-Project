//#indef mec104 
#define mec104 

#include <iostream>

class mec104
{
private:
	double	feedRate, MRR, depthOfCut, widthOfCut, diameter, spindleSpeed, unitPowerFactor;
	double	pi = 3.14159;
	int		op;
	char tempchar;
	char yn;

public:

	void equation_selection();
	void mmr_equation_variant();
	void scs_equation_variant();
	void mp_equation_variant();
	void calculate_mmr();
	void calculate_scs();
	void calculate_mp();
};
//#endif