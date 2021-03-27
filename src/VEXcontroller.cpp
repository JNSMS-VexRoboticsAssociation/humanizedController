#include "VEXheader.h"

int main() {
    while (true){
		int channel = channelUsing();
        switch (channel){
			//Controll the corresponding device
	    	case 3:
				motorController(1, getChannelValue(channel));
				break;
	    	case 2:
				motorController(2, getChannelValue(channel));
				break;
		}
    }
    return 0;
}
