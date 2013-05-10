/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:43 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface GetA8KeyResp : PBGeneratedMessage {
	unsigned int hasFullUrl:1; 
	unsigned int hasA8Key:1; 
	unsigned int hasTitle:1; 
	unsigned int hasContent:1; 
	unsigned int hasBaseResponse:1; 
	unsigned int hasJsapipermission:1; 
	unsigned int hasGeneralControlBitSet:1; 
	unsigned int hasActionCode:1; 
	NSString* fullUrl; 
	NSString* a8Key; 
	NSString* title; 
	NSString* content; 
	BaseResponse* baseResponse; 
	JSAPIPermissionBitSet* jsapipermission; 
	GeneralControlBitSet* generalControlBitSet; 
	unsigned actionCode; 
}
@property (retain) GeneralControlBitSet* generalControlBitSet; 
@property (assign) BOOL hasGeneralControlBitSet; 
@property (retain) JSAPIPermissionBitSet* jsapipermission; 
@property (assign) BOOL hasJsapipermission; 
@property (retain) NSString* content; 
@property (assign) BOOL hasContent; 
@property (retain) NSString* title; 
@property (assign) BOOL hasTitle; 
@property (assign) unsigned actionCode; 
@property (assign) BOOL hasActionCode; 
@property (retain) NSString* a8Key; 
@property (assign) BOOL hasA8Key; 
@property (retain) NSString* fullUrl; 
@property (assign) BOOL hasFullUrl; 
@property (retain) BaseResponse* baseResponse; 
@property (assign) BOOL hasBaseResponse; 
+(id)parseFromData:(id)arg1;
-(id)SetContent:(id)arg1;
-(int)serializedSize;
-(void)writeToCodedOutputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1;
-(void)setHasGeneralControlBitSet:(BOOL)arg1;
-(void)setHasJsapipermission:(BOOL)arg1;
-(void)setHasTitle:(BOOL)arg1;
-(void)setHasActionCode:(BOOL)arg1;
-(void)setHasA8Key:(BOOL)arg1;
-(void)setHasFullUrl:(BOOL)arg1;
-(id)SetGeneralControlBitSet:(id)arg1;
-(id)SetJsapipermission:(id)arg1;
-(id)SetTitle:(id)arg1;
-(id)SetActionCode:(unsigned)arg1;
-(id)SetA8Key:(id)arg1;
-(id)SetFullUrl:(id)arg1;
-(void)setActionCode:(unsigned)arg1;
-(void)setGeneralControlBitSet:(id)arg1;
-(void)setJsapipermission:(id)arg1;
-(void)setA8Key:(id)arg1;
-(void)setFullUrl:(id)arg1;
-(void)setHasBaseResponse:(BOOL)arg1;
-(id)SetBaseResponse:(id)arg1;
-(void)setBaseResponse:(id)arg1;
-(void)setHasContent:(BOOL)arg1;
-(void)setTitle:(id)arg1;
-(id)init;
-(void)dealloc;
-(void)setContent:(id)arg1;
@end