/* Generated by RuntimeBrowser.
 */

@protocol CECInterfaceDelegate <NSObject>

@required

- (void)interface:(CECInterface *)arg1 hibernationChanged:(BOOL)arg2;
- (void)interface:(CECInterface *)arg1 receivedFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg2;
- (void)interfacePropertiesChanged:(CECInterface *)arg1;

@end
