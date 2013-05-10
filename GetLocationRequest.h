/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:43:02 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface GetLocationRequest : PBGeneratedMessage {
	unsigned int hasLongitude:1; 
	unsigned int hasLatitude:1; 
	unsigned int hasPrecision:1; 
	unsigned int hasGpssource:1; 
	unsigned int hasMacAddr:1; 
	unsigned int hasCellId:1; 
	unsigned int hasBaseRequest:1; 
	int longitude; 
	int latitude; 
	int precision; 
	int gpssource; 
	NSString* macAddr; 
	NSString* cellId; 
	BaseRequest* baseRequest; 
}
@property (assign) int gpssource; 
@property (assign) BOOL hasGpssource; 
@property (retain) NSString* cellId; 
@property (assign) BOOL hasCellId; 
@property (retain) NSString* macAddr; 
@property (assign) BOOL hasMacAddr; 
@property (assign) int precision; 
@property (assign) BOOL hasPrecision; 
@property (assign) int latitude; 
@property (assign) BOOL hasLatitude; 
@property (assign) int longitude; 
@property (assign) BOOL hasLongitude; 
@property (retain) BaseRequest* baseRequest; 
@property (assign) BOOL hasBaseRequest; 
+(id)parseFromData:(id)arg1;
-(id)SetBaseRequest:(id)arg1;
-(int)serializedSize;
-(void)writeToCodedOutputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1;
-(void)setHasGpssource:(BOOL)arg1;
-(void)setHasCellId:(BOOL)arg1;
-(void)setHasMacAddr:(BOOL)arg1;
-(void)setHasPrecision:(BOOL)arg1;
-(void)setHasLatitude:(BOOL)arg1;
-(void)setHasLongitude:(BOOL)arg1;
-(id)SetGpssource:(int)arg1;
-(id)SetCellId:(id)arg1;
-(id)SetMacAddr:(id)arg1;
-(id)SetPrecision:(int)arg1;
-(id)SetLatitude:(int)arg1;
-(id)SetLongitude:(int)arg1;
-(void)setGpssource:(int)arg1;
-(void)setCellId:(id)arg1;
-(void)setMacAddr:(id)arg1;
-(void)setHasBaseRequest:(BOOL)arg1;
-(void)setBaseRequest:(id)arg1;
-(void)setPrecision:(int)arg1;
-(void)setLatitude:(int)arg1;
-(void)setLongitude:(int)arg1;
-(id)init;
-(void)dealloc;
@end