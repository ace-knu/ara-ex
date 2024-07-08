
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "em_app1.h"


/**********************************************************************************************************************
 *  VARIABLES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  FUNCTIONS
 *********************************************************************************************************************/

namespace mga {
namespace autoever {
namespace sample {

EmApp1::EmApp1()
    : em_app1_logger{ara::log::CreateLogger("CTX1", "EM APP1", ara::log::LogLevel::kVerbose)} {}

EmApp1::~EmApp1() {}

void EmApp1::Init()
{
    em_app1_logger.LogInfo() << "APP1 Init Function start.";
}

void EmApp1::Act()
{
    // em_app1_logger.LogInfo() << "APP1 Act Function start.";
}

}  // namespace sample
}  // namespace autoever
}  // namespace mga

