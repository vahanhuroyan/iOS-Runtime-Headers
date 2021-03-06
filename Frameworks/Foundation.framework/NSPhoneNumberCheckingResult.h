/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSString *_phoneNumber;
    id _underlyingResult;
}

@property(readonly) void* underlyingResult;


- (id)description;
- (void)dealloc;
- (id)phoneNumber;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)resultType;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 phoneNumber:(id)arg2 underlyingResult:(void*)arg3;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 phoneNumber:(id)arg2;
- (void*)underlyingResult;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;

@end
