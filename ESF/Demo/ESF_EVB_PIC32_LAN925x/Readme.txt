/*
 * Readme - Related to Demo ESF_EVB_PIC32_LAN925x
 */


 1. The Demo Project does not build as it is, and encounter with Build errors
  and those will be related to SSC related files.

 2. User has to generate SSC code and add ssc code in the respective folder

 	ethercat-software-framework-public/ESF/Source/SSC

 3. For quick verification, "sample_app.xls" added. Sample application xls file can be used
  at the time of SSC code generation.

	ethercat-software-framework-public/ESF/Demo/ESF_EVB_PIC32_LAN925x

 4. The SSC folder already has three files named "sample_app.c, sample_app.h and sample_appObjects.h"
  And are given for reference to make it work with the sample application. 

 4. Current Demo apllication related functions are added in sample_app.c and sample_app.h
  
 5. The Generated SSC code also contain sample_app.c, sample_app.h and sample_appObjects.h. 
  For quick verification, the above mentioned three files can be used as it is.


 List of API's
 ======================
 1. void BL_FOE_Application(void);
 2. void APP_FW_startDownload(void);
 3. void APP_FW_StateBOOTtoINIT(void);
 4. BOOL APP_FW_GetDownloadStateFinished(void);


 Note: 

 The sample_app.c and sample_app.h given only for quick reference and are only for the given demo.
 The application related functions can be written as per the user application.
