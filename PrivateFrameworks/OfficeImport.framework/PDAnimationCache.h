/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDBuild, PDAnimateMotionBehavior, PDAnimationTargetElement, NSString;

@interface PDAnimationCache : NSObject  {
    int mNodeType;
    int mPresetId;
    int mPresetSubType;
    int mPresetClass;
    PDAnimationTargetElement *mTargetElement;
    BOOL mHasDelay;
    double mDelay;
    BOOL mHasDuration;
    double mDuration;
    BOOL mHasDirection;
    double mDirection;
    BOOL mHasPartCount;
    int mPartCount;
    PDAnimateMotionBehavior *mMotionPath;
    BOOL mHasValue;
    double mValue;
    PDBuild *mBuild;
    int mIterateType;
    BOOL mIsHead;
    int mLevel;
    NSString *mGroupId;
}

@property(retain) PDAnimationTargetElement * targetElement;
@property int nodeType;
@property int presetId;
@property int presetSubType;
@property int presetClass;
@property int iterateType;
@property BOOL hasDelay;
@property double delay;
@property BOOL hasDuration;
@property double duration;
@property BOOL hasDirection;
@property double direction;
@property BOOL hasPartCount;
@property int partCount;
@property(retain) PDAnimateMotionBehavior * motionPath;
@property BOOL hasValue;
@property double value;
@property(retain) NSString * groupId;
@property BOOL isHead;
@property int level;
@property(retain) PDBuild * build;

+ (void)mapAnimationInfo:(id)arg1 cacheData:(id)arg2 state:(id)arg3;
+ (id)createAnimationInfoDataForCacheItem:(id)arg1 order:(unsigned int)arg2;
+ (void)loadAnimationCache:(id)arg1 pdAnimation:(id)arg2 state:(id)arg3;
+ (void)mapCommonData:(id)arg1 cacheData:(id)arg2 state:(id)arg3;

- (void)dealloc;
- (double)direction;
- (double)value;
- (void)setDelay:(double)arg1;
- (double)delay;
- (void)setValue:(double)arg1;
- (int)nodeType;
- (void)setDirection:(double)arg1;
- (int)level;
- (void)setLevel:(int)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setIsHead:(BOOL)arg1;
- (void)setHasValue:(BOOL)arg1;
- (void)setHasPartCount:(BOOL)arg1;
- (void)setHasDirection:(BOOL)arg1;
- (void)setHasDelay:(BOOL)arg1;
- (void)setIterateType:(int)arg1;
- (void)setPresetClass:(int)arg1;
- (void)setNodeType:(int)arg1;
- (id)initWithAnimationInfo:(id)arg1;
- (BOOL)isHead;
- (BOOL)hasValue;
- (void)setPartCount:(int)arg1;
- (int)partCount;
- (BOOL)hasPartCount;
- (int)iterateType;
- (void)setBuild:(id)arg1;
- (void)setMotionPath:(id)arg1;
- (id)motionPath;
- (void)setTargetElement:(id)arg1;
- (int)presetId;
- (int)presetSubType;
- (void)setGroupId:(id)arg1;
- (BOOL)hasDelay;
- (id)targetElement;
- (int)presetClass;
- (void)setPresetSubType:(int)arg1;
- (void)setPresetId:(int)arg1;
- (id)build;
- (id)groupId;
- (void)setHasDuration:(BOOL)arg1;
- (BOOL)hasDuration;
- (BOOL)hasDirection;

@end
