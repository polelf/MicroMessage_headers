/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:10 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface DownloadAppAttachResponse : PBGeneratedMessage {
	unsigned int hasAppId:1; 
	unsigned int hasMediaId:1; 
	unsigned int hasUserName:1; 
	unsigned int hasBaseResponse:1; 
	unsigned int hasData:1; 
	unsigned int hasTotalLen:1; 
	unsigned int hasStartPos:1; 
	unsigned int hasDataLen:1; 
	NSString* appId; 
	NSString* mediaId; 
	NSString* userName; 
	BaseResponse* baseResponse; 
	SKBuiltinBuffer_t* data; 
	unsigned totalLen; 
	unsigned startPos; 
	unsigned dataLen; 
}
@property (retain) SKBuiltinBuffer_t* data; 
@property (assign) BOOL hasData; 
@property (assign) unsigned dataLen; 
@property (assign) BOOL hasDataLen; 
@property (assign) unsigned startPos; 
@property (assign) BOOL hasStartPos; 
@property (assign) unsigned totalLen; 
@property (assign) BOOL hasTotalLen; 
@property (retain) NSString* userName; 
@property (assign) BOOL hasUserName; 
@property (retain) NSString* mediaId; 
@property (assign) BOOL hasMediaId; 
@property (retain) NSString* appId; 
@property (assign) BOOL hasAppId; 
@property (retain) BaseResponse* baseResponse; 
@property (assign) BOOL hasBaseResponse; 
+(id)parseFromData:(id)arg1;
-(id)SetUserName:(id)arg1;
-(id)SetAppId:(id)arg1;
-(int)serializedSize;
-(void)setHasUserName:(BOOL)arg1;
-(void)writeToCodedOutputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1;
-(void)setHasAppId:(BOOL)arg1;
-(void)setHasMediaId:(BOOL)arg1;
-(void)setHasData:(BOOL)arg1;
-(void)setHasDataLen:(BOOL)arg1;
-(void)setHasStartPos:(BOOL)arg1;
-(void)setHasTotalLen:(BOOL)arg1;
-(id)SetMediaId:(id)arg1;
-(id)SetData:(id)arg1;
-(id)SetDataLen:(unsigned)arg1;
-(id)SetStartPos:(unsigned)arg1;
-(id)SetTotalLen:(unsigned)arg1;
-(void)setDataLen:(unsigned)arg1;
-(void)setStartPos:(unsigned)arg1;
-(void)setTotalLen:(unsigned)arg1;
-(void)setMediaId:(id)arg1;
-(void)setHasBaseResponse:(BOOL)arg1;
-(id)SetBaseResponse:(id)arg1;
-(void)setBaseResponse:(id)arg1;
-(void)setData:(id)arg1;
-(void)setUserName:(id)arg1;
-(void)setAppId:(id)arg1;
-(id)init;
-(void)dealloc;
@end