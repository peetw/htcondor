
#ifndef CONDOR_FILE_LOCAL_H
#define CONDOR_FILE_LOCAL_H

#include "condor_file_basic.h"

/**
This class sends all operations to a locally opened file.
Notice that this class is identical to a CondorFileBasic,
except for the few operations listed below.  Operations
which are common to both local and remote files should
go in CondorFileBasic.
*/

class CondorFileLocal : public CondorFileBasic {
public:
	CondorFileLocal();

	virtual int read(int offset, char *data, int length);
	virtual int write(int offset, char *data, int length);

	virtual int fcntl( int cmd, int arg );
	virtual int ioctl( int cmd, int arg );

	virtual int local_access_hack();
	virtual char * get_kind();
};

#endif
