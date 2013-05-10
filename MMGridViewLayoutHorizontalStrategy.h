/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:41:38 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MMGridViewLayoutStrategy.h>

@interface MMGridViewLayoutHorizontalStrategy : MMGridViewLayoutStrategyBase <MMGridViewLayoutStrategy> {
	int _numberOfItemsPerColumn; 
}
@property (nonatomic,copy) int numberOfItemsPerColumn; 				//@synthesize numberOfItemsPerColumn=_numberOfItemsPerColumn - In the implementation block
+(BOOL)requiresEnablingPaging;
-(struct _NSRange)rangeOfPositionsInBoundsFromOffset:(CGPoint)arg1;
-(void)rebaseWithItemCount:(int)arg1 insideOfBounds:(CGRect)arg2;
-(CGPoint)originForItemAtPosition:(int)arg1;
-(int)itemPositionFromLocation:(CGPoint)arg1;
-(id)init;
@end