/*
 * ap_pp.h
 *
 *  Created on: 2021. 4. 9.
 *      Author: sungjinkim
 */

#ifndef SRC_AP_APPP_H_
#define SRC_AP_APPP_H_

#ifdef cplusplus
extern "C"{
#endif

#include "hw.h"

#ifdef cplusplus
}
#endif


#include "hwpp.h"


class ApPp
{
private:

protected:

public:
    ApPp(void);

    bool ApPpInit(void);
    bool ApPpMain(void);
};


#endif /* SRC_AP_APPP_H_ */
