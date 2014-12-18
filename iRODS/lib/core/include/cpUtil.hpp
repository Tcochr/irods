/*** Copyright (c), The Regents of the University of California            ***
 *** For more information please refer to files in the COPYRIGHT directory ***/
/* getUtil.h - Header for for getUtil.c */

#ifndef CP_UTIL_HPP
#define CP_UTIL_HPP

#include <stdio.h>
#include "rodsClient.hpp"
#include "parseCommandLine.hpp"
#include "rodsPath.hpp"

#ifdef __cplusplus
extern "C" {
#endif

int
cpUtil( rcComm_t *conn, rodsEnv *myRodsEnv, rodsArguments_t *myRodsArgs,
        rodsPathInp_t *rodsPathInp );
int
cpFileUtil( rcComm_t *conn, char *srcPath, char *targPath, rodsLong_t srcSize,
            rodsArguments_t *rodsArgs, dataObjCopyInp_t *dataObjCopyInp );
int
initCondForCp( rodsEnv *myRodsEnv, rodsArguments_t *rodsArgs,
               dataObjCopyInp_t *dataObjCopyInp, rodsRestart_t *rodsRestart );
int
cpCollUtil( rcComm_t *conn, char *srcColl, char *targColl,
            rodsEnv *myRodsEnv, rodsArguments_t *rodsArgs,
            dataObjCopyInp_t *dataObjCopyInp, rodsRestart_t *rodsRestart );

#ifdef __cplusplus
}
#endif
#endif	/* CP_UTIL_H */
