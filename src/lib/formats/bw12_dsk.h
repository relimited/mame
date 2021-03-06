/*********************************************************************

    formats/bw12_dsk.h

    Bonwell 12/14 format

*********************************************************************/

#ifndef BW12_DSK_H_
#define BW12_DSK_H_

#include "upd765_dsk.h"

class bw12_format : public upd765_format {
public:
	bw12_format();

	virtual const char *name() const;
	virtual const char *description() const;
	virtual const char *extensions() const;

private:
	static const format formats[];
};

extern const floppy_format_type FLOPPY_BW12_FORMAT;

#endif
