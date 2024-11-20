//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@interface CaraCppLiveReddotProphet : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct CaraCppLiveReddotProphetCppCover cpp_cover;
    struct weak_ptr<cara::CaraCppLiveReddotProphetDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reportThatPreload:(id)arg1 byPrediction:(const void *)arg2;
- (void)reportThatReddotConsume:(id)arg1 isReady:(const void *)arg2;
- (void)predict:(id)arg1 context:(id)arg2 callback:(id)arg3;
- (void)reportThatReddotExpose:(id)arg1 isReady:(const void *)arg2 context:(id)arg3;
- (id)init;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_93e5c690)getDispatcher;

@end

