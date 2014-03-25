//
//  ofHelper.h
//
//  Created by erikccoder on 3/25/14.
//
//

#ifndef ofHelper_h
#define ofHelper_h

#include "ofMain.h"

namespace EK
{
    vector<string> getDirFileList(string path, vector<string> allowExt)
    {
        vector<string> files;
        ofDirectory dir(path);
        
        for(int i=0; i< allowExt.size(); i++)
        {
            dir.allowExt(allowExt[i]);
        }
        
        //populate the directory object
        dir.listDir();
        
        //    //go through and print out all the paths
        for(int i = 0; i < dir.numFiles(); i++)
        {
            files.push_back(dir.getPath(i));
        }
        return files;
    }
    vector<string> getDirFileList(string path, string allowExt)
    {
        vector<string> exts;
        exts.resize(1);
        exts[0] = allowExt;
        return getDirFileList(path, exts);
    }
    vector<string> getDirFileList(string path)
    {
        vector<string> exts;
        return getDirFileList(path, exts);
    }
    
}


#endif
