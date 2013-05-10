/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:42:04 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface RoomInfo : PBGeneratedMessage {
	unsigned int hasUserName:1; 
	unsigned int hasNickName:1; 
	SKBuiltinString_t* userName; 
	SKBuiltinString_t* nickName; 
}
@property (retain) SKBuiltinString_t* nickName; 
@property (assign) BOOL hasNickName; 
@property (retain) SKBuiltinString_t* userName; 
@property (assign) BOOL hasUserName; 
+(id)parseFromData:(id)arg1;
-(id)SetUserName:(id)arg1;
-(int)serializedSize;
-(void)setHasNickName:(BOOL)arg1;
-(id)SetNickName:(id)arg1;
-(void)setHasUserName:(BOOL)arg1;
-(void)writeToCodedOutputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1;
-(void)setNickName:(id)arg1;
-(void)setUserName:(id)arg1;
-(id)init;
-(void)dealloc;
@end