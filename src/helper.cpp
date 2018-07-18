#include <iostream>
#include "helper.h"




vector<string> helper::successor_states(string state,int lane)
{
	vector<string> states;
	states.push_back("KL");
	if (state.compare("KL") == 0) {
		states.push_back("PLCL");
		states.push_back("PLCR");
	}
	else if (state.compare("PLCL") == 0) {
		if (lane==1 || lane==2) {
			states.push_back("PLCL");
			states.push_back("LCL");
		}
	}
	else if (state.compare("PLCR") == 0) {
		if (lane==0 || lane==1) {
			states.push_back("PLCR");
			states.push_back("LCR");
		}
	}
	//If state is "LCL" or "LCR", then just return "KL"
	return states;
}