import prompt from '@system.prompt'
import aircasHD from "libaircashd.so"
@Entry
@Component
export struct Sendmessage {
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Button("sendmessage").margin(10).fontSize(24).onClick(() => {
        // 调用napi接口
        let resultFromNAPI = aircasHD.sendmessage()
        prompt.showToast({ message: resultFromNAPI })
      })
    }
    .width('100%')
    .height('100%')
  }
}
