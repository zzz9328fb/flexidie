//************************************************************
//This file is auto-generated by the SecurityTool v1.0. 
//************************************************************


#import <Foundation/Foundation.h>
@interface  KeyDataManager : NSObject
{

}

- (id)getKeyDataForFileAtIndex:(int)fileIndex;
- (void)getDataAtIndex:(int)index
			configData:(int **)configDataPtr
			 indexData:(int **)indexDataPtr;
@end