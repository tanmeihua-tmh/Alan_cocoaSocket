//
//  ChatTextCell.h
//  Alan_CocoaSocket
//
//  Created by Alan on 2018/10/27.
//  Copyright © 2018年 Alan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ChatModel;

@interface ChatTextCell : UITableViewCell

@property (nonatomic, strong) ChatModel *textModel;

@end