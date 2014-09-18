/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PTSRowAction : NSObject <NSCopying> {
    id _handler;
    bool_deselectRowOnSuccess;
}

@property bool deselectRowOnSuccess;
@property(copy) id handler;

+ (id)action;
+ (id)actionWithHandler:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deselectRowOnSuccess;
- (id)handler;
- (id)init;
- (void)resolveTemplatesWithIndex:(unsigned long long)arg1;
- (void)setDeselectRowOnSuccess:(bool)arg1;
- (void)setHandler:(id)arg1;

@end