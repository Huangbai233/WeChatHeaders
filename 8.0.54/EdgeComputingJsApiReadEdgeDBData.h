//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class EdgeComputingDBService, NSMutableArray, NSMutableDictionary;

@interface EdgeComputingJsApiReadEdgeDBData
{
    EdgeComputingDBService *_dBService;
    NSMutableArray *_dbQueryKeyCache;
    NSMutableDictionary *_dbQueryValueCache;
}

- (void).cxx_destruct;
- (void)clear;
- (unsigned int)getType;
- (id)functionName;
- (id)logic:(id)arg1;
- (_Bool)registerIntoContext:(id)arg1;
- (id)init;

@end

