#ifndef _NOVEL_H_
#define _NOVEL_H_

#include <string>
#include <map>
#include <oslib/oslib.h>

namespace VNPSP
{
	class Novel
	{
	public:
		Novel(std::string dir);
		virtual ~Novel();
		
		std::map<std::string,std::string> info;
		
		OSL_IMAGE* thumbnail();
		void unloadThumbnail();
		
	protected:
		std::string m_dir;
		OSL_IMAGE *m_thumbnail;
		
		void readInfo();
	};
}

#endif
