/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:15 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface GetRecommendAppListRequest : PBGeneratedMessage {
	unsigned int hasInstalledList:1; 
	unsigned int hasBaseRequest:1; 
	unsigned int hasStart:1; 
	unsigned int hasCount:1; 
	unsigned int hasIconType:1; 
	NSString* installedList; 
	BaseRequest* baseRequest; 
	unsigned start; 
	unsigned count; 
	unsigned iconType; 
}
@property (assign) unsigned iconType; 
@property (assign) BOOL hasIconType; 
@property (retain) NSString* installedList; 
@property (assign) BOOL hasInstalledList; 
@property (assign) unsigned count; 
@property (assign) BOOL hasCount; 
@property (assign) unsigned start; 
@property (assign) BOOL hasStart; 
@property (retain) BaseRequest* baseRequest; 
@property (assign) BOOL hasBaseRequest; 
+(id)parseFromData:(id)arg1;
-(id)SetStart:(unsigned)arg1;
-(id)SetBaseRequest:(id)arg1;
-(int)serializedSize;
-(void)writeToCodedOutputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1;
-(void)setHasInstalledList:(BOOL)arg1;
-(void)setHasStart:(BOOL)arg1;
-(id)SetInstalledList:(id)arg1;
-(void)setInstalledList:(id)arg1;
-(void)setHasIconType:(BOOL)arg1;
-(id)SetIconType:(unsigned)arg1;
-(void)setIconType:(unsigned)arg1;
-(void)setHasBaseRequest:(BOOL)arg1;
-(void)setBaseRequest:(id)arg1;
-(void)setHasCount:(BOOL)arg1;
-(id)SetCount:(unsigned)arg1;
-(void)setCount:(unsigned)arg1;
-(void)setStart:(unsigned)arg1;
-(id)init;
-(void)dealloc;
@end