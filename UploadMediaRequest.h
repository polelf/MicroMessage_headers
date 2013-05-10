/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:40 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface UploadMediaRequest : PBGeneratedMessage {
	unsigned int hasBaseRequest:1; 
	unsigned int hasClientMediaId:1; 
	unsigned int hasDataMd5:1; 
	unsigned int hasData:1; 
	unsigned int hasTotalLen:1; 
	unsigned int hasStartPos:1; 
	unsigned int hasDataLen:1; 
	unsigned int hasMediaType:1; 
	BaseRequest* baseRequest; 
	SKBuiltinString_t* clientMediaId; 
	SKBuiltinString_t* dataMd5; 
	SKBuiltinBuffer_t* data; 
	unsigned totalLen; 
	unsigned startPos; 
	unsigned dataLen; 
	unsigned mediaType; 
}
@property (assign) unsigned mediaType; 
@property (assign) BOOL hasMediaType; 
@property (retain) SKBuiltinBuffer_t* data; 
@property (assign) BOOL hasData; 
@property (assign) unsigned dataLen; 
@property (assign) BOOL hasDataLen; 
@property (assign) unsigned startPos; 
@property (assign) BOOL hasStartPos; 
@property (assign) unsigned totalLen; 
@property (assign) BOOL hasTotalLen; 
@property (retain) SKBuiltinString_t* dataMd5; 
@property (assign) BOOL hasDataMd5; 
@property (retain) SKBuiltinString_t* clientMediaId; 
@property (assign) BOOL hasClientMediaId; 
@property (retain) BaseRequest* baseRequest; 
@property (assign) BOOL hasBaseRequest; 
+(id)parseFromData:(id)arg1;
-(id)SetBaseRequest:(id)arg1;
-(int)serializedSize;
-(void)writeToCodedOutputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1;
-(void)setHasMediaType:(BOOL)arg1;
-(void)setHasDataMd5:(BOOL)arg1;
-(void)setHasClientMediaId:(BOOL)arg1;
-(id)SetMediaType:(unsigned)arg1;
-(id)SetDataMd5:(id)arg1;
-(id)SetClientMediaId:(id)arg1;
-(void)setDataMd5:(id)arg1;
-(void)setClientMediaId:(id)arg1;
-(void)setHasData:(BOOL)arg1;
-(void)setHasDataLen:(BOOL)arg1;
-(void)setHasStartPos:(BOOL)arg1;
-(void)setHasTotalLen:(BOOL)arg1;
-(id)SetData:(id)arg1;
-(id)SetDataLen:(unsigned)arg1;
-(id)SetStartPos:(unsigned)arg1;
-(id)SetTotalLen:(unsigned)arg1;
-(void)setDataLen:(unsigned)arg1;
-(void)setStartPos:(unsigned)arg1;
-(void)setTotalLen:(unsigned)arg1;
-(void)setHasBaseRequest:(BOOL)arg1;
-(void)setBaseRequest:(id)arg1;
-(void)setData:(id)arg1;
-(void)setMediaType:(unsigned)arg1;
-(id)init;
-(void)dealloc;
@end