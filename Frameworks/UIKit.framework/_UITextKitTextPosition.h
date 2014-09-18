/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextKitTextPosition : UITextPosition {
    long long _affinity;
    long long _offset;
}

@property long long affinity;
@property long long offset;

+ (id)positionWithOffset:(long long)arg1 affinity:(long long)arg2;
+ (id)positionWithOffset:(long long)arg1;

- (long long)affinity;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)offset;
- (void)setAffinity:(long long)arg1;
- (void)setOffset:(long long)arg1;

@end