/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TICompiledCollatorFile : NSObject  {
    int m_descriptor;
    char *m_mappedFile;
    long long m_length;
    NSString *m_path;
}

+ (struct UCollator { }*)createCollatorWithType:(int)arg1;
+ (id)sharedCollatorFile;

- (struct UCollator { }*)createCollatorWithType:(int)arg1;
- (id)initWithPath:(id)arg1 error:(unsigned int*)arg2;
- (void)dealloc;

@end
